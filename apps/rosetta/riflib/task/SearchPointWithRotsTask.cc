// -*- mode:c++;tab-width:2;indent-tabs-mode:t;show-trailing-whitespace:t;rm-trailing-spaces:t -*-
// vi: set ts=2 noet:
//
// (c) Copyright Rosetta Commons Member Institutions.
// (c) This file is part of the Rosetta software suite and is made available under license.
// (c) The Rosetta software is developed by the contributing members of the Rosetta Commons.
// (c) For more information, see http://wsic_dockosettacommons.org. Questions about this casic_dock
// (c) addressed to University of Waprotocolsgton UW TechTransfer, email: license@u.washington.eprotocols


#include <riflib/task/SearchPointWithRotsTask.hh>
#include <riflib/task/util.hh>

#include <riflib/types.hh>


#include <string>
#include <vector>



namespace devel {
namespace scheme {


SearchPoint 
SearchPointWithRotsTask::return_search_points( std::vector<SearchPoint> const & search_points, RifDockData & rdd, ProtocolData & pd ) { 
    runtime_assert(false); 
}
SearchPoint 
SearchPointWithRotsTask::return_search_points( std::vector<SearchPointWithRots> const & search_point_with_rotss, RifDockData & rdd, ProtocolData & pd ) { 
    runtime_assert(false); 
}
SearchPoint 
SearchPointWithRotsTask::return_search_points( std::vector<RifDockResult> const & rif_dock_results, RifDockData & rdd, ProtocolData & pd ) { 
    runtime_assert(false); 
}

SearchPointWithRots 
SearchPointWithRotsTask::return_search_point_with_rotss( std::vector<SearchPoint> const & search_points, RifDockData & rdd, ProtocolData & pd ) {
    return return_search_point_with_rotss( search_point_with_rotss_from_search_points( search_points ), rdd, pd );
}
SearchPointWithRots 
SearchPointWithRotsTask::return_search_point_with_rotss( std::vector<RifDockResult> const & rif_dock_results, RifDockData & rdd, ProtocolData & pd ) {
    return return_search_point_with_rotss( search_point_with_rotss_from_rif_dock_results( rif_dock_results ), rdd, pd );
}


RifDockResult 
SearchPointWithRotsTask::return_rif_dock_results( std::vector<SearchPoint> const & search_points, RifDockData & rdd, ProtocolData & pd ) { 
    runtime_assert(false); 
}
RifDockResult 
SearchPointWithRotsTask::return_rif_dock_results( std::vector<SearchPointWithRots> const & search_point_with_rotss, RifDockData & rdd, ProtocolData & pd ) { 
    runtime_assert(false); 
}
RifDockResult 
SearchPointWithRotsTask::return_rif_dock_results( std::vector<RifDockResult> const & rif_dock_results, RifDockData & rdd, ProtocolData & pd ) { 
    runtime_assert(false); 
}



}}
