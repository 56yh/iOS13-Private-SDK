//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;

@interface ICAuthorizeMachineResponse : NSObject
{
    NSDictionary *_responseDictionary;
}

@property(readonly, copy, nonatomic) NSData *tokenData;
@property(readonly, copy, nonatomic) NSData *keybagData;
- (id)initWithResponseDictionary:(id)arg1;

@end

