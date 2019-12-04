//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPContext;
@protocol CDPDCircleProxy, CDPKeychainCircleProxy, CDPSecureChannelProxy;

@interface CDPDSecureChannelContext : NSObject
{
    CDPContext *_context;
    id <CDPKeychainCircleProxy> _keychainCircleProxy;
    id <CDPSecureChannelProxy> _secureChannelProxy;
    id <CDPDCircleProxy> _circleProxy;
}

@property(retain, nonatomic) id <CDPDCircleProxy> circleProxy; // @synthesize circleProxy=_circleProxy;
@property(retain, nonatomic) id <CDPSecureChannelProxy> secureChannelProxy; // @synthesize secureChannelProxy=_secureChannelProxy;
@property(retain, nonatomic) id <CDPKeychainCircleProxy> keychainCircleProxy; // @synthesize keychainCircleProxy=_keychainCircleProxy;
- (void)dealloc;
- (_Bool)initialize:(id *)arg1;
- (id)initWithChannel:(id)arg1 dataProvider:(id)arg2 circleProxy:(id)arg3;
- (id)initWithContext:(id)arg1 circleProxy:(id)arg2;

@end

