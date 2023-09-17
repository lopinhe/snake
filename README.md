# snake
I tested to compile a game built with the Go based EbitEngine using WebAssembly and to locally deploy it with a Go-server


game source: https://pliutau.com/ebiten-snake/

WebAssembly tutorial: https://golangbot.com/webassembly-using-go/ 
(I made alterations to the main.go server-program)

- pull repository
- go to snake/webassembly/cmd/server
- go run main.go
- open adress http://localhost:8080/ in local browser
- for compiling with WebAssembly after changing the Go-Program, execute newWasm.c in the assets directory
