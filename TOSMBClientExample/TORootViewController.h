//
//  TORootViewController.h
//  TOSMBClientExample
//
//  Created by Tim Oliver on 8/10/15.
//  Copyright © 2015 TimOliver. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TOSMBSession;

@interface TORootViewController : UIViewController

@property (nonatomic, weak) IBOutlet UILabel *noticeLabel;

@property (nonatomic, weak) IBOutlet UIView *downloadView;
@property (nonatomic, weak) IBOutlet UILabel *fileNameLabel;
@property (nonatomic, weak) IBOutlet UIProgressView *progressView;
@property (nonatomic, weak) IBOutlet UIButton *suspendButton;
@property (nonatomic, weak) IBOutlet UIButton *cancelButton;

- (IBAction)suspendButtonTapped:(id)sender;
- (IBAction)cancelButtonTapped:(id)sender;

- (void)downloadFileFromSession:(TOSMBSession *)session atFilePath:(NSString *)filePath;

- (void)uploadFileTosession:(TOSMBSession *)session atFilePath:(NSString *)filePath withDestinationPath:(NSString *)destinationPath;

- (void)createFolderOnsession:(TOSMBSession *)session withFilePath:(NSString *)filePath withFolderName:(NSString *)folderName;



@end
