//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

__attribute__((visibility("hidden")))
@interface STIntroContentPrivacyViewController : OBWelcomeController
{
    id /* block */ _continueHandler;
}

@property(readonly, copy) id /* block */ continueHandler; // @synthesize continueHandler=_continueHandler;
- (void)_continue:(id)arg1;
- (void)loadView;
- (id)initWithContinueHandler:(id /* block */)arg1;

@end

