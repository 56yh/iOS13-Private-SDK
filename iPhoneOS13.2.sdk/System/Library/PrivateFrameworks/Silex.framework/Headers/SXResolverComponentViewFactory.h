//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentViewFactory-Protocol.h>

@class NSString;
@protocol NFResolver;

@interface SXResolverComponentViewFactory : NSObject <SXComponentViewFactory>
{
    id <NFResolver> _resolver;
}

@property(readonly, nonatomic) id <NFResolver> resolver; // @synthesize resolver=_resolver;
- (id)componentViewForComponent:(id)arg1;
@property(readonly, nonatomic) int role;
@property(readonly, nonatomic) NSString *type;
- (Class)componentViewClass;
- (id)initWithResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

