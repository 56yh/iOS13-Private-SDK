//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAccount;

@interface IMCoreAutomationHook : NSObject
{
    IMAccount *_imessageAccount;
}

+ (id)stringFromAutomationErrorCode:(long long)arg1;
- (id)existingChatForGroupID:(id)arg1 error:(id *)arg2 results:(id)arg3;
- (id)handlesFromStrings:(id)arg1 error:(id *)arg2 results:(id)arg3;
- (id)chatForHandles:(id)arg1 error:(id *)arg2 results:(id)arg3;
@property(readonly) IMAccount *bestiMessageAccount;

@end

