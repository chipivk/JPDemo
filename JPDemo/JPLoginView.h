//
//  JPLoginView.h
//  LighterViewController
//
//  Created by Jordi Pellat Massó on 17/05/14.
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import <UIKit/UIKit.h>
@class JPLoginViewModel;
@protocol JPLoginViewDelegate;

typedef BOOL(^JPLoginViewConfirmationCompletion)();

@interface JPLoginView : UIView

@property (strong, nonatomic) JPLoginViewModel *viewModel;
@property (weak, nonatomic) id<JPLoginViewDelegate> loginViewDelegate;

- (void)showAppearanceAnimation;
- (void)showNoConnectionFeedback:(BOOL)shouldShow;
- (void)showUserConfirmationWithCompletionBlock:(JPLoginViewConfirmationCompletion)completion;

@end

@protocol JPLoginViewDelegate <NSObject>

- (void)didTapLoginAtLoginView:(JPLoginView *)loginView;

@end

@interface JPLoginViewModel : NSObject

@property (strong, nonatomic) NSString *userName;
@property (strong, nonatomic) NSString *password;

@end