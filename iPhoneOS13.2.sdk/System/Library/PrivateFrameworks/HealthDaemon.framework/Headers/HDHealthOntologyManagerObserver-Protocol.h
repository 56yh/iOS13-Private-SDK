//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HDHealthOntologyManager, NSError;

@protocol HDHealthOntologyManagerObserver 

@optional
- (void)ontologyManagerReferenceOntologyCreated:(HDHealthOntologyManager *)arg1;
- (void)ontologyManagerReferenceOntologyFinishedUpdate:(HDHealthOntologyManager *)arg1 success:(_Bool)arg2 error:(NSError *)arg3;
- (void)ontologyManagerReferenceOntologyWillUpdate:(HDHealthOntologyManager *)arg1;
@end

