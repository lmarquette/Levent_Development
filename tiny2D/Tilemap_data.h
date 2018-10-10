#pragma once

#include "SDL2-2.0.8\include\SDL.h"

namespace Tileset
{
	struct Tileset
	{
		SDL_Texture *tex;
		int tile_w;
		int tile_h;
		int n_rows;
		int n_cols;
	};

	struct Tile_Info
	{
		int tile_w;
		int tile_h;
		int tile_x;
		int tile_y;
	};
}