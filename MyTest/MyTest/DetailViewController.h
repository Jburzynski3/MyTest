//
//  DetailViewController.h
//  MyTest
//
//  Created by Joshua Burzynski on 8/20/13.
//  Copyright (c) 2013 Neuone. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
