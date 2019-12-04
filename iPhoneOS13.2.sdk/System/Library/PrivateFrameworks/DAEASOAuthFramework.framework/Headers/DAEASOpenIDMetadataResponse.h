//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSString;

@interface DAEASOpenIDMetadataResponse : NSObject
{
    NSString *_tokenRequestURI;
    NSDictionary *_data;
    long long _statusCode;
    NSError *_error;
    NSString *_errorMessage;
}

@property(readonly, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSString *tokenRequestURI; // @synthesize tokenRequestURI=_tokenRequestURI;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end

