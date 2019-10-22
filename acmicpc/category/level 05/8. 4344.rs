use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();

    let mut range = input.trim().parse::<i32>().unwrap();

    for i in 0..range {
        input.clear();
        io::stdin().read_line(&mut input).unwrap();
        let mut iter = input.split_whitespace();
        iter.next();

        let mut count = 0.;
        let mut len = iter.clone().count() as f32;
        let mut average = iter.clone().map(|s| s.parse::<f32>().unwrap()).sum::<f32>() / len;

        for k in iter {
            if k.parse::<f32>().unwrap() > average {
                count += 1.0;
            }
        }
        println!("{:.3}%", count / len * 100.);
    }
}