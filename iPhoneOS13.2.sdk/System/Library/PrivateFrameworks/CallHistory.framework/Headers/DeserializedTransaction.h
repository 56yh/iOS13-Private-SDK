//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CHRecentCall;

@interface DeserializedTransaction : NSObject
{
    CHRecentCall *_call;
    unsigned long long _type;
}

@property unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) CHRecentCall *call; // @synthesize call=_call;
- (id)initWithCall:(id)arg1 andType:(unsigned long long)arg2;

@end

