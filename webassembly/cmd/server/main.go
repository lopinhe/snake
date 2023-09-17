package main

import (
    "log"
    "net/http"
)

// func main() {
//     err := http.ListenAndServe(":8080", http.FileServer(http.Dir("../../assets")))
//     if err != nil {
//         fmt.Println("Failed to start server", err)
//         return
//     }
// }

func main() {
    fs := http.FileServer(http.Dir("../../assets"))
    http.Handle("/", fs)

    log.Println("Listening...")
    http.ListenAndServe(":8080", nil)
}
