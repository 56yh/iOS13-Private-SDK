//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class NSURL;

@interface STShowDraftMessageRequest : AFSiriRequest
{
    NSURL *_draftMessageIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)createUsageResult;
- (id)createResponse;
- (id)message;
- (id)draftMessageIdentifier;
- (id)_initWithDraftMessageIdentifier:(id)arg1;

@end

