//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class APUIWFLIntentController, INIntent, INIntentResponse, INInteraction, NSError;

@protocol APUIWFLIntentControllerDelegate 
- (void)intentControllerDidFailAuthorizationCheck:(APUIWFLIntentController *)arg1;
- (void)intentController:(APUIWFLIntentController *)arg1 didFailWithError:(NSError *)arg2 forInteraction:(INInteraction *)arg3;
- (void)intentController:(APUIWFLIntentController *)arg1 didHandleInteraction:(INInteraction *)arg2;
- (void)intentController:(APUIWFLIntentController *)arg1 requiresContinuingInAppForIntent:(INIntent *)arg2 proceedHandler:(void (^)(_Bool))arg3;
- (void)intentController:(APUIWFLIntentController *)arg1 requiresConfirmationForIntent:(INIntent *)arg2 intentResponse:(INIntentResponse *)arg3;

@optional
- (_Bool)intentController:(APUIWFLIntentController *)arg1 shouldRequireConfirmationForIntent:(INIntent *)arg2 intentResponse:(INIntentResponse *)arg3;
@end

