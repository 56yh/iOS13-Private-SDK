//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PXCMMComposeRecipientSelectionSnapshot : NSObject
{
    NSArray *_selectedComposeRecipients;
    NSArray *_selectedRecipients;
}

+ (id)new;
@property(readonly, copy, nonatomic) NSArray *selectedRecipients; // @synthesize selectedRecipients=_selectedRecipients;
@property(readonly, copy, nonatomic) NSArray *selectedComposeRecipients; // @synthesize selectedComposeRecipients=_selectedComposeRecipients;
- (id)initWithSelectedComposeRecipients:(id)arg1 selectedRecipients:(id)arg2;
- (id)init;

@end

