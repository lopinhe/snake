#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int result;
	
	// The following command will cross compile this Go program 
	// and place the output binary inside the assets folder.
    // Execute "GOOS=js GOARCH=wasm go build -o  ../../assets/json.wasm" command
    result = system("fGOOS=js GOARCH=wasm go build -o  ../../assets/json.wasm");
    if (result != 0) {
        printf("Failed to execute 'GOOS=js GOARCH=wasm go build -o  ../../assets/json.wasm'\n");
        return 1;
    }

	//  JavaScript glue code
    // Execute "cp "$(go env GOROOT)/misc/wasm/wasm_exec.js" ." command
    result = system("cp "$(go env GOROOT)/misc/wasm/wasm_exec.js" .");
    if (result != 0) {
        printf("Failed to execute 'cp "$(go env GOROOT)/misc/wasm/wasm_exec.js" .'\n");
        return 1;
    }

    return 0;
}