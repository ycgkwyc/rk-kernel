
static int vop2_calc_dsc_clk(struct drm_
 	 * so when txp_clk is equal to v_pixclk, we set dsc_cds = crtc_clock / 4,
 	 * otherwise dsc_cds = crtc_clock / 8;
 	 */

 #ifdef CONFIG_DRM_PANEL_FYDETAB
  if (output_if_is_mipi(vcstate->output_if))
  vcstate->dsc_cds_clk_rate = v_pixclk / (vcstate->dsc_txp_clk_rate == v_pixclk ? 4 : 8);
  else
    vcstate->dsc_cds_clk_rate = v_pixclk / 8;
 #else
  vcstate->dsc_cds_clk_rate = v_pixclk / 8;
 #endif
 
 	return 0;
 }
@@ -6291,7 +6298,13 @@ static void vop2_crtc_enable_dsc(struct
 	bool mipi_ds_mode = false;
 	uint32_t *reg_base = vop2->regs;
 	u32 offset = 0;

 #ifdef CONFIG_DRM_PANEL_FYDETAB
  struct vop2_clk *dclk_core;
  char clk_name[32];

  snprintf(clk_name, sizeof(clk_name), "dclk_core%d", vp->id);
  dclk_core = vop2_clk_get(vop2, clk_name);
 #endif
 	if (!vop2->data->nr_dscs) {
 		DRM_WARN("Unsupported DSC\n");
 
@@ -6382,8 +6395,14 @@ static void vop2_crtc_enable_dsc(struct
 		 * dsc_htotal = htotal * (1 << dclk_core->div_val) /
 				((1 << dsc_txp_clk->div_val) * (1 << dsc_cds_clk->div_val))
 		*/

 #ifdef CONFIG_DRM_PANEL_FYDETAB
    if (output_if_is_mipi(vcstate->output_if))
      dsc_htotal = htotal * (1 << dsc_cds_clk->div_val) * (1 << dsc_txp_clk->div_val) / (1 << dclk_core->div_val);
    else
      dsc_htotal = htotal / (1 << dsc_cds_clk->div_val);
 #else
    dsc_htotal = htotal / (1 << dsc_cds_clk->div_val);
 #endif
 		val = dsc_htotal << 16 | dsc_hsync;
 		VOP_MODULE_SET(vop2, dsc, dsc_htotal_pw, val);
 
