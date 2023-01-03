import os

path = './stalin-sort-2-8$linux/tests'

for i in range(11, 12):
    input_path = f'{path}/{i:02d}'
    new_input_path = f'{path}/{i:02d}.in.txt'

    output_path = f'{path}/{i:02d}.a'
    new_output_path = f'{path}/{i:02d}.out.txt'

    os.rename(input_path, new_input_path)
    os.rename(output_path, new_output_path)
