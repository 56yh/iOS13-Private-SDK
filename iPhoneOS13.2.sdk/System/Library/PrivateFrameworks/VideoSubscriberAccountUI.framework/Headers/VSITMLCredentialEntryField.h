//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccountUI/VSCredentialEntryField.h>

#import <VideoSubscriberAccountUI/IKAppKeyboardDelegate-Protocol.h>

@class IKTextFieldElement, NSString;

__attribute__((visibility("hidden")))
@interface VSITMLCredentialEntryField : VSCredentialEntryField <IKAppKeyboardDelegate>
{
    IKTextFieldElement *_associatedTextFieldElement;
}

@property(retain, nonatomic) IKTextFieldElement *associatedTextFieldElement; // @synthesize associatedTextFieldElement=_associatedTextFieldElement;
- (void)textDidChangeForKeyboard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

