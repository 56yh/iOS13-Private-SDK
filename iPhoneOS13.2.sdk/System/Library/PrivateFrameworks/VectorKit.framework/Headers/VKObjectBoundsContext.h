//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VKObjectBoundsContext : NSObject
{
    vector_554e3200 _points;
    struct VKEdgeInsets _edgePadding;
}

@property(nonatomic) struct VKEdgeInsets edgePadding; // @synthesize edgePadding=_edgePadding;
- (id).cxx_construct;
- (CDStruct_02837cd9)boundingRect;
- (_Bool)isEmpty;
- (void)addPoints:(const vector_554e3200 *)arg1;

@end

