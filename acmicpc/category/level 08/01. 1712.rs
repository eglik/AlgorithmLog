use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();

    let mut datas = vec![];

    for data in input.split_whitespace() {
        datas.push(data.parse::<i32>().unwrap());
    }

    let income = datas[2] - datas[1];

    if income <= 0 {
        println!("-1");
    }
    else {
        println!("{}", datas[0] / income + 1);
    }
}