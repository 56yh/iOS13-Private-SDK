//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/AFSiriResponse.h>

@class NSURL;

@interface AFObjectUpdatedSiriResponse : AFSiriResponse
{
    NSURL *_objectIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_objectIdentifier;
- (id)_initWithRequest:(id)arg1 objectIdentifier:(id)arg2;

@end

