//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AAPaymentSummaryResponse : AAResponse
{
    NSDictionary *_responseParameters;
}

@property(readonly, nonatomic) NSString *description;
@property(readonly, nonatomic) unsigned long long numberOfCards;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

