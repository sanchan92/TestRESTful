//
//  ViewController.h
//  TestRESTful
//
//  Created by Chung San Chan on 3/10/2016.
//  Copyright © 2016 SanKi Studio. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, strong) IBOutlet UILabel *greetingId;
@property (nonatomic, strong) IBOutlet UILabel *greetingContent;

- (IBAction)fetchGreeting;

@end

