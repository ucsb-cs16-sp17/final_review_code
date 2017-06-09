string starH(int height) {
    string result = ""; 
    if (height < 3 || (height % 2 ==0)) {
        return result; 
    }

    for (int i = 0; i < height/2; i++) { 
        result += "*"; 
        for (int j = height-2; j > 0; j--) 
            result += " "; 
        result += "*\n"; 
    }

    for (int i = 0; i < height; i++) {
        result += "*"; 
    }
    result += "\n"; 
    
     for (int i = 0; i < height/2; i++) {
        result += "*"; 
        for (int j = height-2; j > 0; j--) 
            result += " "; 
        result += "*\n"; 
    }
    
    return result; 

}
