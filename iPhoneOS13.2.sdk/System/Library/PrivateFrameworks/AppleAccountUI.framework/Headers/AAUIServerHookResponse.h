//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURLRequest;

@interface AAUIServerHookResponse : NSObject
{
    NSDictionary *_additionalPayload;
    NSURLRequest *_continuationRequest;
}

@property(copy, nonatomic) NSURLRequest *continuationRequest; // @synthesize continuationRequest=_continuationRequest;
@property(copy, nonatomic) NSDictionary *additionalPayload; // @synthesize additionalPayload=_additionalPayload;

@end

