// 0x16000388
const GeoLayout warp_pipe_geo[] = {
    GEO_CULLING_RADIUS(450),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, RCP_dokan),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
