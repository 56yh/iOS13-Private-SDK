//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestProcessor-Protocol.h>

@class NSString;

@interface PGGraphIngestPersonGenderProcessor : NSObject <PGGraphIngestProcessor>
{
}

- (unsigned long long)_genderForPersonNode:(id)arg1 graph:(id)arg2;
- (void)processPersonGenderForPersonNodes:(id)arg1 graph:(id)arg2 withProgressBlock:(id /* block */)arg3;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (_Bool)shouldRunWithGraphUpdate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

