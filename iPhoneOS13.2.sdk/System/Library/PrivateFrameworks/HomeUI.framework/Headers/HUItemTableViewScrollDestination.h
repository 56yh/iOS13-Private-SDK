//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HFItem;

@interface HUItemTableViewScrollDestination : NSObject
{
    _Bool _animated;
    HFItem *_item;
}

@property(readonly, nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) HFItem *item; // @synthesize item=_item;
- (id)initWithItem:(id)arg1 animated:(_Bool)arg2;

@end

