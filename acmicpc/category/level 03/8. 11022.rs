use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();

    let count = input.trim().parse::<i32>().unwrap();
    
    for i in 0..count {
        input.clear();
        io::stdin().read_line(&mut input).unwrap();

        let numbers :Vec<i32> = input.split_whitespace().map(|s| s.to_string().parse::<i32>().unwrap()).collect();
        println!("Case #{}: {} + {} = {}", i + 1, numbers[0], numbers[1], numbers[0] + numbers[1]);
    }
}