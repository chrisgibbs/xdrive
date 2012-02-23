//
//  SettingsViewController.h
//  xDrive
//
//  Created by Chris Gibbs on 9/23/11.
//  Copyright (c) 2011 Abilene Christian University. All rights reserved.
//

#import <MessageUI/MessageUI.h>

@interface SettingsViewController : UITableViewController <MFMailComposeViewControllerDelegate>

@property (nonatomic, strong) IBOutlet UILabel *hostnameLabel, *userLabel, *storageLabel;

@end
