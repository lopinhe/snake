package main

import (
	"log"

	"github.com/hajimehoshi/ebiten/v2"
	"github.com/lopinhe/snake/snake"
)

func main() {
	game := snake.NewGame()

	ebiten.SetWindowSize(snake.ScreenWidth, snake.ScreenHeight)
	ebiten.SetWindowTitle("Snake")
	if err := ebiten.RunGame(game); err != nil {
		log.Fatal(err)
	}
}
