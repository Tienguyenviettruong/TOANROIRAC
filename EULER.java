public boolean eulerCycle(int start) {
      //Đoạn này giống DFS thì thôi luôn,hehe
		Stack stack = new Stack<>();
		stack.push(start);
		ArrayList listVisit = new ArrayList<>();
		while (!stack.empty()) {
		    //Lấy đỉnh đầu tiên ra xét
			int current_vertex = stack.peek();
			// Biến này dùng để kiểm tra xem cái đỉnh kế có cạnh đi qua hay không ý
			boolean has_edge = false;
			for (int i = 0; i < topNum(); i++) {
			    //DUyệt nó thôi,nếu nó có cạnh thì vào trong if đánh dấu liền
				if (this.matrixA[current_vertex][i] != 0) {
					// đánh dấu nó có cạnh liền
					has_edge = true;
					//Đây đây cái này quan trọng nè,đi qua là xóa cạnh nhé,vì vô hướng nên xóa 2 
//chiều,có hướng thì nhớ là một chiều thôi nha.
					this.matrixA[current_vertex][i] = this.matrixA[i][current_vertex] = 0;
					//Nhớ push vô stack để nó chạy vòng lập nha.
					stack.push(i);
					//Khi đã có thằng có cạnh rồi thì mình dừng cái for đi (theo nguyên tắc cuộc của DFS ý)
					break;
				}
			}
            //Còn đây là trường hợp không có cạnh nè
			if (!has_edge) {
			    //Buộc phải lấy đỉnh khác ra test đường đi thôi
				int vertex = stack.pop();
				//Khi lấy ra thì mình add vào list các đỉnh đi qua nhé
				listVisit.add(vertex);
			}
		}
		//Thông thường thì nó sẽ in ra chiều ngược nên các bạn nhớ viết đoạn code 

		//để nó in ra theo chiều ngược lại
		// in ra duong di theo chieu nguoc lai
		String string = "";
		String temp = " ==> ";
		for (int k = listVisit.size() - 1; k >= 0; k--) {
			string += listVisit.get(k);
			if (k > 0) {
				string += temp;
			}
		}
		System.out.println(string);
		return true;
	}
