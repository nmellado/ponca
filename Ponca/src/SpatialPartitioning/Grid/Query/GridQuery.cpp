#include <PCA/SpacePartitioning/Grid/Query/GridQuery.h>

namespace pca {

GridQuery::GridQuery() :
    m_grid(nullptr)
{
}

GridQuery::GridQuery(const Grid* grid) :
    m_grid(grid)
{
}

} // namespace pca