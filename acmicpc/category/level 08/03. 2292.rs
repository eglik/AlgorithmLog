use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();
    
    let data = input.trim().parse::<i32>().unwrap();
    let mut room = 2;
    let mut room_size = 6;
    let mut answer = 1;
    
    while room <= data {
        room += room_size;
        room_size += 6;
        answer += 1;
    }
            
    println!("{}", answer);
}