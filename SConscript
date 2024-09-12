from building import * 
Import('rtconfig')
# get current dir path
cwd = GetCurrentDir()

src = []

# add mlx90632 src files

src += Glob('lib/mlx90632.c')
src += Glob('lib/mlx90632_extended_meas.c')

if GetDepend('PKG_MLX90632_USING_SENSOR_V1'):
    src += ['sensor_melexis_mlx90632.c']

if GetDepend(['PKG_USING_MLX90632_SENSOR_V1_EXAMPLE']):
    src += ['example_mlx90632.c']

# add mlx90632 inc files
path  = [cwd, cwd + '/lib']
# add src and inc to group 
group = DefineGroup('mlx90632', src, depend = ['PKG_USING_MLX90632'], CPPPATH = path)


Return('group')
