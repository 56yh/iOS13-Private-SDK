//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PXGadget;

@interface PXGadgetNavigationItem : NSObject
{
    _Bool _animated;
    unsigned long long _gadgetType;
    NSString *_gadgetId;
    id <PXGadget> _gadget;
    long long _navigationType;
    id /* block */ _navigationBlock;
}

@property(readonly, nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(readonly, copy, nonatomic) id /* block */ navigationBlock; // @synthesize navigationBlock=_navigationBlock;
@property(readonly, nonatomic) long long navigationType; // @synthesize navigationType=_navigationType;
@property(readonly, nonatomic) id <PXGadget> gadget; // @synthesize gadget=_gadget;
@property(readonly, nonatomic) NSString *gadgetId; // @synthesize gadgetId=_gadgetId;
@property(readonly, nonatomic) unsigned long long gadgetType; // @synthesize gadgetType=_gadgetType;
- (id)initWithGadget:(id)arg1 navigationBlock:(id /* block */)arg2 animated:(_Bool)arg3;
- (id)initWithGadgetId:(id)arg1 navigationBlock:(id /* block */)arg2 animated:(_Bool)arg3;
- (id)initWithGadetType:(unsigned long long)arg1 navigationBlock:(id /* block */)arg2 animated:(_Bool)arg3;

@end

