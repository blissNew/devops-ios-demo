//
//  ViewController.m
//  TestPublicYunUpdate
//
//  Created by ASP on 2020/5/28.
//  Copyright © 2020 ASP. All rights reserved.
//

#import "ViewController.h"
#import <AlicloudUpdate/AlicloudUpdate.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (IBAction)clickButton:(id)sender {
    [AlicloudUpdate checkAndUpdateNewVersion];
}

@end
