#define _PURE_ERSEM_ 0
#define _PURE_MAECS_ 0
#define _IS_SHORTWAVE_RADIATION_IS_PAR_ 0

#define _LINE_      write(*,*) repeat('*',79)
#define _PAUSE_     read(*,*)

#define _SPBM_FILE_NAME_ 'spbm.yaml'

#define _RE_DAY_					100
#define _RE_YEAR_					10
#define _SECONDS_PER_CIRCLE_        300
#define _WIND_SPEED_				5._rk
#define _AIR_CO2_					380._rk

#define _FABM_YAML_NAME_			get_spbm_string_parameter('fabm_yaml_name')
#define _FILE_NAME_                 get_spbm_string_parameter('input_file_name')
#define _INITIALIZATION_SINCE_YEAR_ get_spbm_real_parameter('initialization_since_year') 
#define _DEPTH_ON_BOUNDARY_         get_spbm_string_parameter('depth_on_boundary')
#define _OCEAN_TIME_                get_spbm_string_parameter('time')
#define _TEMPERATURE_               get_spbm_string_parameter('temperature')
#define _SALINITY_                  get_spbm_string_parameter('salinity')
#define _RHO_                       get_spbm_string_parameter('density')
#define _TURBULENCE_                get_spbm_string_parameter('eddy_diffusivity')
#define _ICE_THICKNESS_             get_spbm_string_parameter('ice_thickness')
#define _SNOW_THICKNESS_            get_spbm_string_parameter('snow_thickness')
#define _ICE_SURFACE_TEMPERATURE_   get_spbm_string_parameter('ice_surface_temperature')
#define _SHORTWAVE_RADIATION_       get_spbm_string_parameter('shortwave_radiation')

#define _REQUIRED_VOLUME_           get_spbm_real_parameter('required_volume')
#define _IALGAE_VELOCITY_           get_spbm_real_parameter('ice_algae_velocity')

#define _FILE_NAME_ICE_             'ice.nc'
#define _FILE_NAME_WATER_           'water.nc'
#define _FILE_NAME_SEDIMENTS_       'sediments.nc'

#define _BACKGROUND_ATTENUATION_    get_spbm_real_parameter('background_attenuation')
#define _SILT_ATTENUATION_          get_spbm_real_parameter('silt_attenuation')
#define _SILT_CONCENTRATION_        get_spbm_real_parameter('silt_concentration')

#define _LONGITUDE_                 get_spbm_real_parameter('longitude')
#define _LATITUDE_                  get_spbm_real_parameter('latitude')

#define _WIDTH_BBL_                 get_spbm_real_parameter('width_bbl')
#define _RESOLUTION_BBL_            get_spbm_real_parameter('resolution_bbl')

#define _WIDTH_SEDIMENTS_           get_spbm_real_parameter('width_sediments')
#define _RESOLUTION_SEDIMENTS_      get_spbm_real_parameter('resolution_sediments')

#define _ICE_LAYERS_RESOLUTION_     get_spbm_real_parameter('ice_layers_resolution')

#define _Alk_                       get_spbm_string_parameter('Alk')
#define _DIC_                       get_spbm_string_parameter('DIC')
#define _PO4_                       get_spbm_string_parameter('PO4')
#define _NO3_                       get_spbm_string_parameter('NO3')
#define _Si_                        get_spbm_string_parameter('Si')

#define _O2_                        get_spbm_string_parameter('O2')

#define _CaCO3_                     get_spbm_string_parameter('CaCO3')
#define _S0_                        get_spbm_string_parameter('S0')
#define _Fe3_                       get_spbm_string_parameter('Fe3')
#define _FeCO3_                     get_spbm_string_parameter('FeCO3')
#define _FeS_                       get_spbm_string_parameter('FeS')
#define _FeS2_                      get_spbm_string_parameter('FeS2')
#define _Mn4_                       get_spbm_string_parameter('Mn4')
#define _MnCO3_                     get_spbm_string_parameter('MnCO3')
#define _MnS_                       get_spbm_string_parameter('MnS')
#define _Sipart_                    get_spbm_string_parameter('Sipart')
#define _Phy_                       get_spbm_string_parameter('Phy')
#define _PON_                       get_spbm_string_parameter('PON')
#define _SmallPOM_                  get_spbm_string_parameter('SmallPOM')
#define _MediumPOM_                 get_spbm_string_parameter('MediumPOM')
#define _LargePOM_                  get_spbm_string_parameter('LargePOM')
#define _iDiatoms_                  get_spbm_string_parameter('iDiatoms')
#define _Diatoms_                   get_spbm_string_parameter('Diatoms')
#define _NanoPhy_                   get_spbm_string_parameter('NanoPhy')
#define _PicoPhy_                   get_spbm_string_parameter('PicoPhy')
#define _MicroPhy_                  get_spbm_string_parameter('MicroPhy')
#define _MesoZoo_                   get_spbm_string_parameter('MesoZoo')
#define _MicroZoo_                  get_spbm_string_parameter('MicroZoo')
#define _NanoFlag_                  get_spbm_string_parameter('NanoFlag')