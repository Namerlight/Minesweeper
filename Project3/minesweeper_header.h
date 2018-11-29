#pragma once

#ifndef MSBOARD_H_INCLUDED;
#define MSBOARD_H_INCLUDED;

template <class itemtype>
class minesweeper_board {

	struct square_properties {
		bool is_there_mine;
		bool adjacent_mines_number;
	};

	public:
		generate_real_board();
		delete_real_board();
		generate_virtual_board();
		delete_virtual_board();
		get_player_move();
		check_for_mines();
		player_plant_flag();
		print_current_virtual();

}




#endif // !1


