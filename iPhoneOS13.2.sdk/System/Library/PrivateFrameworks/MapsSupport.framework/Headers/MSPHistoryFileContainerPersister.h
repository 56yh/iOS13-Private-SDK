//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSupport/MSPFileContainerPersister.h>

@interface MSPHistoryFileContainerPersister : MSPFileContainerPersister
{
}

- (id)stateSnapshotFromData:(id)arg1;
- (_Bool)getSnapshot:(out id *)arg1 data:(out id *)arg2 mergingCurrentState:(id)arg3 withState:(id)arg4 mergeOptions:(id)arg5 error:(out id *)arg6;
- (_Bool)getSnapshot:(out id *)arg1 data:(out id *)arg2 forNewContents:(id)arg3 edits:(id)arg4 appliedToOldContents:(id)arg5 error:(out id *)arg6;

@end

