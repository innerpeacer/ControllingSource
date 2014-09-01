//
//  DetailViewController.h
//  ControllingSource
//
//  Created by innerpeacer on 14-9-1.
//  Copyright (c) 2014年 Palmap. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

