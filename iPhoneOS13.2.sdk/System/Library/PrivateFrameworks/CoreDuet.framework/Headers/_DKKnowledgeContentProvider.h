//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKContentProvider-Protocol.h>

@class NSString;
@protocol _DKKnowledgeQuerying;

@interface _DKKnowledgeContentProvider : NSObject <_DKContentProvider>
{
    id <_DKKnowledgeQuerying> _knowledgeStore;
}

@property(retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
- (void)executeQuery:(id)arg1 queue:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)executeQuery:(id)arg1 error:(id *)arg2;
- (id)initWithKnowledgeStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

