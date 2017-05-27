import cs50

def main():
    print("Height: ", end="")
    height = cs50.get_int()
    
    for i in range(height):
        print(" "*(height-1-i)+"#"*(i+1))
        
if __name__ == '__main__':
    main()