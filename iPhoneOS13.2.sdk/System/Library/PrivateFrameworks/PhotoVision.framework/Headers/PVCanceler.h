//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PVCanceler : NSObject
{
    _Bool _canceled;
    id /* block */ _updateBlock;
}

+ (id)cancelerWithUpdateBlock:(id /* block */)arg1;
@property(copy, nonatomic) id /* block */ updateBlock; // @synthesize updateBlock=_updateBlock;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;

@end

