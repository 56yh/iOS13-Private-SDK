//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface DOCItemCollectionSubscriber : NSObject
{
    NSUUID *_UUID;
    id /* block */ _updateBlock;
}

@property(copy) id /* block */ updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)initWithUpdateBlock:(id /* block */)arg1;

@end

