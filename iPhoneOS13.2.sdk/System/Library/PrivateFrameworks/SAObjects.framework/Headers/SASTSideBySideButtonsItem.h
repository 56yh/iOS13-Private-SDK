//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SAUIColor;
@protocol SASTTemplateAction;

@interface SASTSideBySideButtonsItem : AceObject <SASTTemplateItem>
{
}

+ (id)sideBySideButtonsItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sideBySideButtonsItem;
@property(copy, nonatomic) NSString *secondaryButtonLabel;
@property(nonatomic) _Bool secondaryButtonEnabled;
@property(retain, nonatomic) id <SASTTemplateAction> secondaryButtonAction;
@property(retain, nonatomic) SAUIColor *primaryButtonTextColor;
@property(copy, nonatomic) NSString *primaryButtonLabel;
@property(nonatomic) _Bool primaryButtonEnabled;
@property(retain, nonatomic) id <SASTTemplateAction> primaryButtonAction;
@property(copy, nonatomic) NSString *buttonsViewStyle;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

