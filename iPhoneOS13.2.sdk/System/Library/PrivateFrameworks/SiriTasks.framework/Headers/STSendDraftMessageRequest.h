//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class STSiriMessage;

@interface STSendDraftMessageRequest : AFSiriRequest
{
    STSiriMessage *_message;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)createResponse;
- (id)message;
- (id)_initWithMessage:(id)arg1;
- (_Bool)_makeAppFrontmost;

@end

