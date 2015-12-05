//
//  DetailViewController.h
//  Test
//
//  Created by 胡波 on 15/8/25.
//  Copyright (c) 2015年 胡波. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

